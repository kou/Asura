/* Asura
   Copyright (C) 2013 MIRACLE LINUX CORPORATION
 
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQLProcessorFactory_h
#define SQLProcessorFactory_h

#include <string>
#include <map>
using namespace std;

#include <glib.h>
#include "SQLProcessor.h"

typedef SQLProcessor *(*SQLProcessorCreatorFunc)(void);

class SQLProcessorFactory
{
public:
	static void init(void);
	static SQLProcessor *create(string &DBName);
	static void addFactory(string name, SQLProcessorCreatorFunc factory);

protected:

private:
	static GRWLock m_lock;
	static map<string, SQLProcessorCreatorFunc> m_factoryMap;
};

#endif // SQLProcessorFactory_h
