# Docs: https://mesonbuild.com/Python-module.html
py = import('python').find_installation(pure: false)

# Overall model: https://github.com/scipy/scipy/blob/main/scipy/constants/meson.build
# In the future, we can make use of subdir() to organize the Python code and avoid long paths.
python_sources = files(
    'exampleproject/__init__.py',
    'exampleproject/foo.py',
)

pybind_sources = files(
    '_core/wrap.cpp',
)

# Docs: https://mesonbuild.com/Python-module.html
py.install_sources(python_sources, subdir: 'exampleproject')


##########################
##### Pybind Wrapper #####
##########################

pybind11_proj = subproject('pybind11')
pybind11_dep = pybind11_proj.get_variable('pybind11_dep')

py.extension_module(
    '_core',
    pybind_sources,
    dependencies: [
        exampleproject_dep,
        pybind11_dep,
    ],
    install: true,
    subdir: 'exampleproject',
)
