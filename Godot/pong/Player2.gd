extends KinematicBody2D


var speed : Vector2
var velocity : Vector2


# Called when the node enters the scene tree for the first time.
func _ready():
	speed = Vector2(250,250)
	velocity = Vector2(0,0)

func get_input():
	velocity = Vector2(0,0)
	if Input.is_action_pressed("up_2"):
		velocity=Vector2(0,-1) * speed
	if Input.is_action_pressed("down_2"):
		velocity=Vector2(0,1) * speed

func _physics_process(_delta):
	get_input()
	velocity = move_and_slide(velocity)
