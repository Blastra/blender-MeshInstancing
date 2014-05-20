# CMake generated Testfile for 
# Source directory: /home/arad/gitProjects/blender/altBlender/blender/source/tests
# Build directory: /home/arad/gitProjects/blender/altBlender/build_linux/source/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(script_load_keymap "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_keymap_completeness.py")
ADD_TEST(script_load_addons "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_load_addons.py")
ADD_TEST(script_load_modules "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_load_py_modules.py")
ADD_TEST(script_pyapi_mathutils "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_pyapi_mathutils.py")
ADD_TEST(bevel "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/modeling/bevel_regression.blend" "--python-text" "run_tests")
ADD_TEST(import_obj_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.obj(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/obj/cube.obj')" "--md5=39cce4bacac2d1b18fc470380279bc15" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_obj_cube.blend")
ADD_TEST(import_obj_nurbs_cyclic "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.obj(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/obj/nurbs_cyclic.obj')" "--md5=ad3c307e5883224a0492378cd32691ab" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_obj_nurbs_cyclic.blend")
ADD_TEST(import_obj_makehuman "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.obj(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/obj/makehuman.obj')" "--md5=c9f78b185e58358daa4ecaecfa75464e" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_obj_makehuman.blend")
ADD_TEST(export_obj_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.obj(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_cube.obj',use_selection=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_cube.obj" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_cube.mtl" "--md5=70bdc394c2726203ad26c085176e3484" "--md5_method=FILE")
ADD_TEST(export_obj_nurbs "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.obj(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_nurbs.obj',use_selection=False,use_nurbs=True)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_nurbs.obj" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_nurbs.mtl" "--md5=a733ae4fa4a591ea9b0912da3af042de" "--md5_method=FILE")
ADD_TEST(export_obj_all_objects "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.obj(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_all_objects.obj',use_selection=False,use_nurbs=True)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_all_objects.obj" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_obj_all_objects.mtl" "--md5=04b3ed97cede07a19548fc518ce9f8ca" "--md5_method=FILE")
ADD_TEST(import_ply_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.ply(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/ply/cube_ascii.ply')" "--md5=527134343c27fc0ea73115b85fbfd3ac" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_ply_cube.blend")
ADD_TEST(import_ply_bunny "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.ply(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/ply/bunny2.ply')" "--md5=6ea5b8533400a17accf928b8fd024eaa" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_ply_bunny.blend")
ADD_TEST(import_ply_small_holes "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.ply(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/ply/many_small_holes.ply')" "--md5=c3093e26ecae5b6d59fbbcf2a0d0b39f" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_ply_small_holes.blend")
ADD_TEST(export_ply_cube_all_data "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/cube_all_data.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_mesh.ply(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_ply_cube_all_data.ply')" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_ply_cube_all_data.ply" "--md5=6adc3748ceae8298496f99d0e7e76c15" "--md5_method=FILE")
ADD_TEST(export_ply_suzanne_all_data "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/suzanne_all_data.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_mesh.ply(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_ply_suzanne_all_data.ply')" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_ply_suzanne_all_data.ply" "--md5=68ba23f02efd6511bfd093f45f703221" "--md5_method=FILE")
ADD_TEST(export_ply_vertices "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/vertices.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_mesh.ply(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_ply_vertices.ply')" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_ply_vertices.ply" "--md5=37faba0aa2014451b27f951afa92f870" "--md5_method=FILE")
ADD_TEST(import_stl_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.stl(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/stl/cube.stl')" "--md5=8ceb5bb7e1cb5f4342fa1669988c66b4" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_stl_cube.blend")
ADD_TEST(import_stl_conrod "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.stl(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/stl/conrod.stl')" "--md5=690a4b8eb9002dcd8631c5a575ea7348" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_stl_conrod.blend")
ADD_TEST(import_stl_knot_max_simplified "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.stl(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/stl/knot_max_simplified.stl')" "--md5=baf82803f45a84ec4ddbad9cef57dd3e" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_stl_knot_max_simplified.blend")
ADD_TEST(export_stl_cube_all_data "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/cube_all_data.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_mesh.stl(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_stl_cube_all_data.stl')" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_stl_cube_all_data.stl" "--md5=64cb97c0cabb015e1c3f76369835075a" "--md5_method=FILE")
ADD_TEST(export_stl_suzanne_all_data "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/suzanne_all_data.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_mesh.stl(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_stl_suzanne_all_data.stl')" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_stl_suzanne_all_data.stl" "--md5=e9b23c97c139ad64961c635105bb9192" "--md5_method=FILE")
ADD_TEST(export_stl_vertices "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/vertices.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_mesh.stl(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_stl_vertices.stl')" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_stl_vertices.stl" "--md5=3fd3c877e573beeebc782532cc005820" "--md5_method=FILE")
ADD_TEST(import_x3d_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.x3d(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/x3d/color_cube.x3d')" "--md5=3fae9be004199c145941cd3f9f80ad7b" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_x3d_cube.blend")
ADD_TEST(import_x3d_teapot "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.x3d(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/x3d/teapot.x3d')" "--md5=8ee196c71947dce4199d55698501691e" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_x3d_teapot.blend")
ADD_TEST(import_x3d_suzanne_material "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.x3d(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/x3d/suzanne_material.x3d')" "--md5=3edea1353257d8b5a5f071942f417be6" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_x3d_suzanne_material.blend")
ADD_TEST(export_x3d_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.x3d(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_x3d_cube.x3d',use_selection=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_x3d_cube.x3d" "--md5=05312d278fe41da33560fdfb9bdb268f" "--md5_method=FILE")
ADD_TEST(export_x3d_nurbs "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.x3d(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_x3d_nurbs.x3d',use_selection=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_x3d_nurbs.x3d" "--md5=4286d4a2aa507ef78b22ddcbdcc88481" "--md5_method=FILE")
ADD_TEST(export_x3d_all_objects "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.x3d(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_x3d_all_objects.x3d',use_selection=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_x3d_all_objects.x3d" "--md5=f5f9fa4c5619a0eeab66685aafd2f7f0" "--md5_method=FILE")
ADD_TEST(import_3ds_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.autodesk_3ds(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/3ds/cube.3ds')" "--md5=cb5a45c35a343c3f5beca2a918472951" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_3ds_cube.blend")
ADD_TEST(import_3ds_hierarchy_lara "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.autodesk_3ds(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/3ds/hierarchy_lara.3ds')" "--md5=766c873d9fdb5f190e43796cfbae63b6" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_3ds_hierarchy_lara.blend")
ADD_TEST(import_3ds_hierarchy_greek_trireme "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.autodesk_3ds(filepath='/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/3ds/hierarchy_greek_trireme.3ds')" "--md5=b62ee30101e8999cb91ef4f8a8760056" "--md5_method=SCENE" "--write-blend=/home/arad/gitProjects/blender/altBlender/build_linux/tests/import_3ds_hierarchy_greek_trireme.blend")
ADD_TEST(export_3ds_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.autodesk_3ds(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_3ds_cube.3ds',use_selection=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_3ds_cube.3ds" "--md5=a31f5071b6c6dc7445b9099cdc7f63b3" "--md5_method=FILE")
ADD_TEST(export_3ds_nurbs "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.autodesk_3ds(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_3ds_nurbs.3ds',use_selection=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_3ds_nurbs.3ds" "--md5=5bdd21be3c80d814fbc83cb25edb08c2" "--md5_method=FILE")
ADD_TEST(export_3ds_all_objects "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.autodesk_3ds(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_3ds_all_objects.3ds',use_selection=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_3ds_all_objects.3ds" "--md5=68447761ab0ca38e1e22e7c177ed48a8" "--md5_method=FILE")
ADD_TEST(export_fbx_cube "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.fbx(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_fbx_cube.fbx',use_selection=False,use_metadata=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_fbx_cube.fbx" "--md5=59a35577462f95f9a0b4e6035226ce9b" "--md5_method=FILE")
ADD_TEST(export_fbx_nurbs "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.fbx(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_fbx_nurbs.fbx',use_selection=False,use_metadata=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_fbx_nurbs.fbx" "--md5=d31875f18f613fa0c3b16e978f87f6f8" "--md5_method=FILE")
ADD_TEST(export_fbx_all_objects "/home/arad/gitProjects/blender/altBlender/build_linux/bin/blender" "--background" "-noaudio" "--factory-startup" "--env-system-scripts" "/home/arad/gitProjects/blender/altBlender/blender/release/scripts" "/home/arad/gitProjects/blender/altBlender/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/home/arad/gitProjects/blender/altBlender/blender/source/tests/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.fbx(filepath='/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_fbx_all_objects.fbx',use_selection=False,use_metadata=False)" "--md5_source=/home/arad/gitProjects/blender/altBlender/build_linux/tests/export_fbx_all_objects.fbx" "--md5=b35eb2a9d0e73762ecae2278c25a38ac" "--md5_method=FILE")
