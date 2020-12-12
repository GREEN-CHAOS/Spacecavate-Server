extends OrbitCalculator


# Declare member variables here. Examples:
# var a = 2
# var b = "text"
var rand = RandomNumberGenerator.new()



# Called when the node enters the scene tree for the first time.
func _ready():
#	rand.randomize()
#	for i in range(50):
		var randomVector = Vector3(5,0,0)
		var randomVector2 = Vector3(0,0,0)
		self.addSattelite(randomVector2,Vector3(0,0,-3),500,2,false,Vector3(0,0,0))
		self.addSattelite(randomVector,Vector3(0,0,3),500,2,false,Vector3(0,0,0))
		self.set_rootnode("Node")
		
		


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	pass
#	self.process(delta)
