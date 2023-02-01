extends Panel

var speed: int
var orientation: int
onready var left = get_node("/root/Main/Window/Background/LeftPlayer")
onready var right = get_node("/root/Main/Window/Background/RightPlayer")

func _ready():
	speed = 5
	randomize()
	var hautbas = (-1 if randi()%2 else 1)
	orientation = hautbas * randi()%11


func _process(delta):
	self.rect_position += Vector2(speed,orientation)
	if self.rect_position.y >= 0:
		orientation = -orientation
	if self.rect_position.y < get_viewport().size.y - self.rect_size.y:
		orientation = -orientation
	if self.rect_position.x > right.rect_position.x and self.rect_position.y >= right.rect_position.y and self.rect_position.y >= right.rect_position.y + right.size.y:
		speed = -speed
