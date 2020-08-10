// See the file  in the main distribution directory for copyright.

#include "SNMP.h"
#include "plugin/Plugin.h"
#include "analyzer/Component.h"

namespace zeek::plugin::detail::Zeek_SNMP {

class Plugin : public zeek::plugin::Plugin {
public:
	zeek::plugin::Configuration Configure() override
		{
		AddComponent(new zeek::analyzer::Component("SNMP", zeek::analyzer::snmp::SNMP_Analyzer::InstantiateAnalyzer));

		zeek::plugin::Configuration config;
		config.name = "Zeek::SNMP";
		config.description = "SNMP analyzer";
		return config;
		}
} plugin;

} // namespace zeek::plugin::detail::Zeek_SNMP
