libtracker_data_tests = [
    'backup',
    'crc32',
    'db-journal',
    'ontology-change',
    'sparql-blank',
]

libtracker_data_slow_tests = [
    'ontology',
    'sparql'
]

libtracker_data_test_deps = [tracker_common_dep, tracker_data_dep, tracker_sparql_dep]

foreach base_name: libtracker_data_tests
    source = 'tracker-@0@-test.c'.format(base_name)
    binary_name = 'tracker-@0@-test'.format(base_name)
    test_name = 'data-@0@'.format(base_name)

    binary = executable(binary_name, source,
      dependencies: libtracker_data_test_deps,
      c_args: test_c_args)

    tests += {
      'name': test_name,
      'exe': binary,
      'requires_dbus': true,
    }
endforeach

foreach base_name: libtracker_data_slow_tests
    source = 'tracker-@0@-test.c'.format(base_name)
    binary_name = 'tracker-@0@-test'.format(base_name)
    test_name = 'data-@0@'.format(base_name)

    binary = executable(binary_name, source,
      dependencies: libtracker_data_test_deps,
      c_args: test_c_args)

      tests += {
        'name': test_name,
        'exe': binary,
        'requires_dbus': true,
        'timeout': 180
    }
endforeach
