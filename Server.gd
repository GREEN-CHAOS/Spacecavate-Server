extends SceneTree


# Declare member variables here. Examples:
# var a = 2
# var b = "text"
const defaultrecievingport = 56
var defaultsendingport = 70
var socket = PacketPeerUDP.new()


# Called when the node enters the scene tree for the first time.
func _init():
	socket.listen(defaultrecievingport)
	print("listening on ",defaultrecievingport)
	var thread = Thread.new()
	thread.start(self,"waitforclientrequest",socket,0)
	var packet = thread.wait_to_finish()
	var addressandport = packet.split("REQUEST valid Spacecavate Server ")[1].split("port ")
	print(addressandport)
	var address = addressandport[0]
	var port = addressandport[1]
	print(address," ",port)
	socket.set_dest_address(address,int(port))
	for _i in range(0,10):
		
		socket.put_packet(PoolByteArray("Hi form the server".to_utf8()))
		print("sended")

func waitforclientrequest(_i):
	print("threadlistening")
	while true:
		if socket.get_available_packet_count()>0:
			print("recieveddata")
			var packet = socket.get_packet().get_string_from_utf8()
			if packet.begins_with("REQUEST valid Spacecavate Server "):
				print("isvalid")
				print(packet)
				return packet

func _process(_delta):
	if socket.get_available_packet_count() > 0:
		print(socket.get_packet().get_string_from_utf8())