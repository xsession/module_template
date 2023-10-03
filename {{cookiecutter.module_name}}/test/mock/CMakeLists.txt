
add_module_lib(
        NAME 
                {{cookiecutter.buffer_name}}_{{cookiecutter.buffer_type}}_mock
        SOURCE 
                src/{{cookiecutter.buffer_name}}_{{cookiecutter.buffer_type}}_mock.c 
        INCLUDE 
                inc
        LINK 
                {{cookiecutter.mock_libs}}
        DEFINES 
                {{cookiecutter.mock_defines}}
        STANDARD
                11
)