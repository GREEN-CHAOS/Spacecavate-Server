extends OrbitCalculator


# Declare member variables here. Examples:
# var a = 2
# var b = "text"
var rand = RandomNumberGenerator.new()

# Called when the node enters the scene tree for the first time.
func _ready():
	rand.randomize()
	for i in range(50):
		var randomVector = Vector3(rand.randf_range(-10000,10000),rand.randf_range(-10000,10000),rand.randf_range(-10000,10000))
		var randomVector2 = Vector3(rand.randf_range(-10000,10000),rand.randf_range(-10000,10000),rand.randf_range(-10000,10000))
		self.addSattelite(randomVector,randomVector2,rand.randf_range(1,100),false,Vector3(0,0,0))
		


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	self.process(delta)
