sbin_PROGRAMS = asura
asura_SOURCES = main.cc

lib_LTLIBRARIES = libasura.la
libasura_la_SOURCES = \
	Asura.cc AsuraThreadBase.cc AsuraException.cc \
	Utils.cc FaceBase.cc FaceMySQL.cc FaceMySQLWorker.cc \
	SQLProcessorTypes.cc SQLProcessorException.cc SQLUtils.cc \
	SQLProcessorFactory.cc SQLProcessor.cc SQLProcessorZabbix.cc \
	SQLProcessorSelect.cc SQLProcessorInsert.cc SQLProcessorUpdate.cc \
	SQLFormulaParser.cc SQLColumnParser.cc SQLWhereParser.cc \
	SQLFromParser.cc SQLTableFormula.cc \
	ColumnComparisonPicker.cc \
	FormulaElement.cc FormulaOperator.cc FormulaFunction.cc \
	ReadWriteLock.cc UsedCountable.cc \
	ItemGroupType.cc ItemGroupTypeManager.cc \
	ItemData.cc ItemGroup.cc ItemTable.cc \
	ItemPtr.cc ItemTablePtr.cc ItemGroupPtr.cc ItemDataUtils.cc \
	VirtualDataStore.cc VirtualDataStoreZabbix.cc \
	VirtualDataStoreZabbixProfiles.cc \
	DataStoreException.cc \
	DataStore.cc DataStoreManager.cc DataStoreZabbix.cc \
	JsonBuilderAgent.cc JsonParserAgent.cc \
	ArmBase.cc ArmZabbixAPI.cc

AM_CXXFLAGS = -Wall -g \
	$(MLPL_CFLAGS) $(GLIB_CFLAGS) $(GIO_CFLAGS) \
	$(LIBSOUP_CFLAGS) $(JSON_GLIB_CFLAGS)

AM_LDFLAGS = \
	$(MLPL_LIBS) $(GLIB_LIBS) $(GIO_LIBS) \
	$(LIBSOUP_LIBS) $(JSON_GLIB_LIBS)

asura_LDADD = -lasura
