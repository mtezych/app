
cmake_minimum_required (VERSION 3.11)


add_executable          (app)

target_compile_features (app PRIVATE cxx_std_14)

target_sources          (app PRIVATE source/App.cxx)

target_link_libraries   (app PRIVATE framework
                                     tool)
