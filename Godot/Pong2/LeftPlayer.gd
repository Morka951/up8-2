extends Panel

var speed: int

# Called when the node enters the scene tree for the first time.
func _ready():
	speed = 5


func _process(delta):
	if Input.is_key_pressed(KEY_Z) and self.rect_position.y > 0:
		self.rect_position += Vector2(0,-speed)
	if Input.is_key_pressed(KEY_S) and self.rect_position.y < get_viewport().size.y - self.rect_size.y:
		self.rect_position += Vector2(0,speed)
