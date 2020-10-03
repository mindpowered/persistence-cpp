#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>

/*!
 * Persistence
 */
class Persistence {
public:

	/*!
	 * TBD
	*/
	void AddMutator() {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		bus->call("Persistence.AddMutator", args);
	}

	/*!
	 * TBD
	*/
	void AddGetter() {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		bus->call("Persistence.AddGetter", args);
	}

	/*!
	 * TBD
	*/
	void Mutate() {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		bus->call("Persistence.Mutate", args);
	}

	/*!
	 * TBD
	*/
	void Get() {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		bus->call("Persistence.Get", args);
	}

};

