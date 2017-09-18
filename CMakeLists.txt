#files

file(GLOB EssexEngineScriptDaemon_HEADERS
    "src/Daemons/ScriptDaemon/*.h"
)
file(GLOB EssexEngineScriptDaemon_SRC
    ${EssexEngineScriptDaemon_HEADERS}
    "src/Daemons/ScriptDaemon/*.cpp"
)

#setup headers

file(COPY ${EssexEngineScriptDaemon_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineScriptDaemon/")

#setup build

add_library(EssexEngineScriptDaemon SHARED ${EssexEngineScriptDaemon_SRC})
target_link_libraries(EssexEngineScriptDaemon EssexEngineCore)