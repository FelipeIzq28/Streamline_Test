// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "NiagaraRendererDetails.h"

class IDetailLayoutBuilder;

class FNiagaraLightRendererDetails : public FNiagaraRendererDetails
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
};