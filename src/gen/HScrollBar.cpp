#include <HScrollBar.hpp>


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void *HScrollBar::___get_type_tag()
{
	return (void *) &HScrollBar::___get_type_tag;
}

void *HScrollBar::___get_base_type_tag()
{
	return (void *) &ScrollBar::___get_type_tag;
}

HScrollBar *HScrollBar::_new()
{
	return (HScrollBar *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"HScrollBar")());
}
}