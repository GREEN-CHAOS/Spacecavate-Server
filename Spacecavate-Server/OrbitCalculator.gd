extends OrbitCalculator

func _ready():
#	rand.randomize()
#	for i in range(50):
		var randomVector = Vector3(5,0,0)
		var randomVector2 = Vector3(0,0,0)
		self.addSattelite(randomVector2,Vector3(0,0,-3),500,2,false,Vector3(0,0,0))
		self.addSattelite(randomVector,Vector3(0,0,3),500,2,false,Vector3(0,0,0))
		self.set_rootnode("Node")
		
func _process(delta):
	pass
