/**
	* \file Dbs.cpp
	* database access code globals (implementation)
	* \copyright (C) 2016-2020 MPSI Technologies GmbH
  * \author Alexander Wirthmüller
  * \date created: 1 Jan 2009
  */

#include "Dbs.h"

using namespace std;

/******************************************************************************
 namespace VecDbsVDbstype
 ******************************************************************************/

uint Sbecore::VecDbsVDbstype::getIx(
			const string& sref
		) {
	if (sref == "my") return MY;
	if (sref == "pg") return PG;
	if (sref == "lite") return LITE;

	return(0);
};

string Sbecore::VecDbsVDbstype::getSref(
			const uint ix
		) {
	if (ix == MY) return("my");
	if (ix == PG) return("pg");
	if (ix == LITE) return("lite");

	return("");
};
