// Copyright Epic Games, Inc. All Rights Reserved.
// Copyright 2020. Author Jica. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FFirebaseHelperModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
