
add_module_test(
    NAME
        {{cookiecutter.module_name}}_test 
    SOURCE 
        tsrc/main.c
        tsrc/ut_{{cookiecutter.module_name}}_test.c
    INCLUDE 
        tinc
    LINK 
        unity
        {{cookiecutter.module_name}}
        {{cookiecutter.test_link_libs}}
    DEFINES
        NDEBUG 
        {{cookiecutter.test_defines}}
    STANDARD
        11
) 

