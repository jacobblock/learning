#
# Create top-level target that renders a PlantUML diagram to a PNG image.
#
function(add_diagram target source)

  # Program used to render the diagram.
  set(plantuml java -jar ${PLANTUML_JARFILE})

  # Diagram source file basename used to create output file name.
  get_filename_component(output ${source} NAME_WE)

  # Render the diagram and write an "${output}.png"
  # file in the current binary folder.
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/${output}.png
    COMMAND
      ${plantuml} -o ${CMAKE_CURRENT_BINARY_DIR} -tpng ${source}
    MAIN_DEPENDENCY
      ${source}
    COMMENT
      "Rendering diagram '${output}'."
  )

  # Top-level target to build the output file.
  add_custom_target(${target} ALL
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/${output}.png)

endfunction()
