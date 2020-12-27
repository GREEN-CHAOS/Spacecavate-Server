extends OrbitCalculator

func _ready():
#	rand.randomize()
#	for i in range(50):
<<<<<<< Updated upstream
		var randomVector = Vector3(5,0,0)
		var randomVector2 = Vector3(0,0,0)
		self.addSattelite(randomVector2,Vector3(0,0,-3),500,2,false,Vector3(0,0,0))
		self.addSattelite(randomVector,Vector3(0,0,3),500,2,false,Vector3(0,0,0))
		self.set_rootnode("Node")
=======
		self.addSattelite(Vector3(0,0,0),Vector3(0,0,0),1,true,1,Vector3(0,0,0))
		self.addSattelite(Vector3(5,0,0),Vector3(0,0,0),1,false,1,Vector3(0,0,0))
#		self.set_rootnode("Node")
>>>>>>> Stashed changes
		
func _process(delta):
<<<<<<< Updated upstream
	pass
=======
	self.process(delta)
>>>>>>> Stashed changes
