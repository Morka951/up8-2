extends KinematicBody2D


var speed : Vector2
var velocity : Vector2
var points1 : int
var points2 : int

func _ready():
	randomize()
	speed = Vector2(325,325)
	velocity = Vector2(rand_range(-6,6),rand_range(-6,6)) * speed
	points1 = 0
	points2 = 0

onready var pos1 = get_node("/root/Main/Player1").position
onready var pos2 = get_node("/root/Main/Player2").position

func _physics_process(_delta):
	if move_and_collide(velocity) != null:
		velocity = velocity.bounce(move_and_collide(velocity).normal)
	if global_position.x > pos1.x:
		points(1)
		reset()
	if global_position.x < pos2.x:
		points(2)
		reset()

func reset():
	global_position = Vector2(424,207)
	randomize()
	velocity = Vector2(rand_range(-6,6),rand_range(-6,6))

func points(player):
	if player == 1:
		points1 = points1 + 1
		get_node("/root/Main/label1").text = str(points1)
	else:
		points2 = points2 + 1
		get_node("/root/Main/label2").text = str(points2)
