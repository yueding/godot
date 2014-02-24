
// modules.cpp - THIS FILE IS GENERATED, DO NOT EDIT!!!!!!!
#include "register_module_types.h"


#include "modules/gridmap/register_types.h"


void register_module_types() {

#ifdef MODULE_GRIDMAP_ENABLED
	register_gridmap_types();
#endif


}

void unregister_module_types() {

#ifdef MODULE_GRIDMAP_ENABLED
	unregister_gridmap_types();
#endif


}

