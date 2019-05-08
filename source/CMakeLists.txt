# Build example
add_executable(example
  example.cpp
  circle.cpp
  window.cpp
  glew.c
  mat2.cpp
  rectangle.cpp
  vec2.cpp
  )
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  glew.c
  vec2.cpp
  tests.cpp
  mat2.cpp
  circle.cpp
  rectangle.cpp
  window.cpp
  )
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

# Build clock
add_executable(clock
  circle.cpp
  clock.cpp
  window.cpp
  glew.c
  mat2.cpp
  rectangle.cpp
  vec2.cpp
  )
target_link_libraries(clock
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(clock glfw nanovg ${COPY_BINARY})

