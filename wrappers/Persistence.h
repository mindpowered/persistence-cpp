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
 * Provides a way of storing data for mindpowered packages.
 * When mindpowered packages need to persist data, they will use Get and Mutate, which in turn will call the Mutators and Getters you have set up.
 * You can set up the Mutators and Getters however you like whether to access a database such as MySQL or MongoDB, or simply write and read from text files.
 */
class Persistence {
public:

	/*!
	 * Set up a Mutator to change stored data
	 * @param recordType type of record being changed (eg. databsae table name)
	 * @param operationName action being performed on the record (eg. insert, update)
	 * @param strategyMethod method to call to actually perform the mutation
	 * @param updateMapper method to call on recordData before calling strategyMethod with the results
	*/
	void AddMutator(std::string recordType, std::string operationName, ::maglev::CppAny strategyMethod, ::maglev::CppAny updateMapper) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(recordType);
		myargs.push_back(param0);
		::maglev::CppAny param1;
		param1.setStdString(operationName);
		myargs.push_back(param1);
		::maglev::CppAny param2;
		param2 = strategyMethod;
		myargs.push_back(param2);
		::maglev::CppAny param3;
		param3 = updateMapper;
		myargs.push_back(param3);
		bus->call("Persistence.AddMutator", args);
	}

	/*!
	 * Set up a Getter to retrieve data
	 * @param recordType type of record being retrieved (eg. databsae table name)
	 * @param operationName query being performed for the record type (eg. findById, findByName, findActive, getInsertedId)
	 * @param strategyMethod method to call to actually perform the data retrieval
	 * @param queryMapper method to call on queryValues before calling strategyMethod with the results
	 * @param resultMapper method to call on data returned from the strategyMethod before returning the results
	*/
	void AddGetter(std::string recordType, std::string operationName, ::maglev::CppAny strategyMethod, ::maglev::CppAny queryMapper, ::maglev::CppAny resultMapper) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(recordType);
		myargs.push_back(param0);
		::maglev::CppAny param1;
		param1.setStdString(operationName);
		myargs.push_back(param1);
		::maglev::CppAny param2;
		param2 = strategyMethod;
		myargs.push_back(param2);
		::maglev::CppAny param3;
		param3 = queryMapper;
		myargs.push_back(param3);
		::maglev::CppAny param4;
		param4 = resultMapper;
		myargs.push_back(param4);
		bus->call("Persistence.AddGetter", args);
	}

	/*!
	 * Use a Mutator to change stored data
	 * @param recordType type of record being changed (eg. databsae table name)
	 * @param operationName action being performed on the record (eg. insert, update)
	 * @param recordData data being updated or saved by passing through updateMapper and then strategyMethod
	*/
	void Mutate(std::string recordType, std::string operationName, ::maglev::CppAny recordData) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(recordType);
		myargs.push_back(param0);
		::maglev::CppAny param1;
		param1.setStdString(operationName);
		myargs.push_back(param1);
		::maglev::CppAny param2;
		param2 = recordData;
		myargs.push_back(param2);
		bus->call("Persistence.Mutate", args);
	}

	/*!
	 * Use a Getter to retrieve data
	 * @param recordType type of record being retrieved (eg. databsae table name)
	 * @param operationName query being performed for the record type (eg. findById, findByName, findActive, getInsertedId)
	 * @param queryValues values that will be passed through queryMapper and then strategyMethod to perform the query
	 * @return {mixed} result from the getter after being passed through resultMapper
	*/
	::maglev::CppAny Get(std::string recordType, std::string operationName, ::maglev::CppAny queryValues) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(recordType);
		myargs.push_back(param0);
		::maglev::CppAny param1;
		param1.setStdString(operationName);
		myargs.push_back(param1);
		::maglev::CppAny param2;
		param2 = queryValues;
		myargs.push_back(param2);
		::maglev::CppAny ret = bus->call("Persistence.Get", myargs);
		return ret;
	}

};

