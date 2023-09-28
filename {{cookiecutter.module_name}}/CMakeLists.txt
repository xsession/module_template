
add_module_lib(
        NAME 
                {{cookiecutter.module_name}}
        SOURCE 
                src/{{cookiecutter.module_name}}.c 
        INCLUDE 
                inc
        LINK 
                {{cookiecutter.link_libs}}
        DEFINES 
                {{cookiecutter.defines}}
        STANDARD
                11
)