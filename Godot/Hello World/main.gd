extends Control

var alpha = 0.0

func _ready():
	var label = Label.new()
	var size_window = rect_size
	var font = DynamicFont.new()
	font.font_data = load("res://Assets/Minecraft.ttf")
	font.size = 100
	label.add_font_override("font",font)
	label.add_color_override("font_color",Color(0,0,0.7,1))
	label.text = "Hello World !"
	label.name = "helloWorld"

	add_child(label,true)
	print(rect_size) #size of the window ?
	print(label.rect_size) #size of the 'label' element ?
	label.rect_position = (size_window - label.rect_size)/2
	
	VisualServer.set_default_clear_color(Color(0,0,0))

func _process(delta):
	var l: Label
	l = get_node("helloWorld")
	l.add_color_override("font_color",Color(0.5,0,0.7,alpha))
	alpha += 0.01
	if alpha > 1:
		get_tree().quit()
