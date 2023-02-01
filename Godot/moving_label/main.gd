extends Control

var alpha = 0.0

# Called when the node enters the scene tree for the first time.
func _ready():
	var label = Label.new()
	var window_size = rect_size
	label.name = "text"
	label.text = "text"
	
	add_child(label,true)
	
	label.rect_position.y = window_size.y/2

func _process(delta):
	var l: Label
	
	l = get_node("text")
	l.rect_position.x = alpha
	alpha += 5
	
	if alpha > rect_size.x:
		get_tree().quit()
