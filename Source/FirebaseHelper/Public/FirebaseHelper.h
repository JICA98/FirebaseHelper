// Copyright Name: Jica, Year of Intended Publishing 2020.

#pragma once

#include "Modules/ModuleManager.h"

class FFirebaseHelperModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
