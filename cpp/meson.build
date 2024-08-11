########################
##### File Sources #####
########################

lib_includes = include_directories(
    'include',
)

lib_sources = files(
    'src/example.cpp',
)

test_sources = files(
    'tests/test_example.cpp',
)

perf_sources = files(
    'perf/main.cpp',
    'perf/perf_example.cpp',
)

################################
##### Library Dependencies #####
################################

spdlog_proj = subproject(
    'spdlog',
    default_options: [
        'tests=disabled',
        'compile_library=true',
    ],
)
spdlog_dep = spdlog_proj.get_variable('spdlog_dep')

gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_dep')
gtest_main_dep = gtest_proj.get_variable('gtest_main_dep')

benchmark_proj = subproject('google-benchmark', default_options: ['tests=disabled'])
benchmark_dep = benchmark_proj.get_variable('google_benchmark_dep')
benchmark_main_dep = benchmark_proj.get_variable('google_benchmark_main_dep')

#########################
##### Build Library #####
#########################

exampleproject_lib = library(
    'exampleproject',
    lib_sources,
    include_directories: lib_includes,
    dependencies: [
        spdlog_dep,
    ],
)

exampleproject_dep = declare_dependency(
    link_with: exampleproject_lib,
    include_directories: lib_includes,
)

######################
##### Unit Tests #####
######################

exampleproject_test = executable(
    'test_exampleproject',
    test_sources,
    dependencies: [
        exampleproject_dep,
        gtest_dep,
        gtest_main_dep,
    ],
)
test('unit_tests', exampleproject_test)

######################
##### Perf Tests #####
######################

exampleproject_perf = executable(
    'perf_exampleproject',
    perf_sources,
    dependencies: [exampleproject_dep, benchmark_dep, benchmark_main_dep],
)
benchmark('perf_tests', exampleproject_perf)
