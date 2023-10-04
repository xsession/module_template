
add_module_lib(
        NAME 
                {{cookiecutter.module_name}}_mock
        PACKAGE 
                {{cookiecutter.package_name}}
        SOURCE 
                src/{{cookiecutter.module_name}}_mock.c 
        INCLUDE 
                inc
        LINK 
                {{cookiecutter.mock_libs}}
        DEFINES 
                {{cookiecutter.mock_defines}}
        STANDARD
                11
)
