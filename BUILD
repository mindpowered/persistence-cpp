cc_library(
  name = 'persistence',
  visibility = ['//visibility:public'],
  deps = [
    '@haxecpp//:haxecpp',
    '@maglev//:maglev',
    ':libpersistence_a',
  ],
  strip_include_prefix = 'include/',
  hdrs = [
    'include/persistence/Persistence.h',
  ],
  linkstatic = 1,
  alwayslink = 1,
  linkopts = ["-pthread"],
)

cc_import(
  name = 'libpersistence_a',
  static_library = 'libpersistence.a',
  alwayslink = 1,
)

genrule(
  name = 'make_libpersistence_a',
  outs = ["libpersistence.a"],
  cmd = "export HOME=/root && haxelib setup /root/haxelib && (cd $$(dirname $(location Build.xml)); haxelib run hxcpp Build.xml) && mv $$(dirname $(location Build.xml))/liboutput.a $@ && chmod u+x $(location strip.sh) && $(location strip.sh) $@",
  tools = glob(["*.xml", "*.txt", "*.h", "src/**", "include/**", "strip.sh"]),
)
