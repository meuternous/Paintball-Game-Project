// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class PaintGame_JohnsonEditorTarget : TargetRules
{
	public PaintGame_JohnsonEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("PaintGame_Johnson");
	}
}
