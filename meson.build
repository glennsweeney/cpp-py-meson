project(
    'exampleproject',
    'cpp',
    default_options: [
        'cpp_std=c++20',
        'cpp_args=-Wdouble-promotion',
        'b_pie=true',
        'default_library=static',
        'warning_level=3',
        'b_ndebug=if-release',
    ],
    version: '0.0.1',
)

subdir('cpp')

if get_option('python').enabled()
    subdir('python')
endif
