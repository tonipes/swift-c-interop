project('swift_c_interop', ['c', 'cpp', 'swift'],
  version : '0.1',
  default_options : ['warning_level=3']
)

subdir('libraryx')

exe = executable(
  'swift_c_interop', ['source/main.swift', 'source/other.swift'],
  dependencies: [libraryx_dep],
)

test('basic', exe)
