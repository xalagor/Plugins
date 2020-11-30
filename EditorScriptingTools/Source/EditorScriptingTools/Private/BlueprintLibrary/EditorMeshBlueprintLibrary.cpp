//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorMeshBlueprintLibrary.h"
#include "EditorMeshUtils.h"



#define LOCTEXT_NAMESPACE "FBluEdMode"

bool UEditorMeshBlueprintLibrary::ConvertProceduralMeshToStaticMesh(UProceduralMeshComponent* ProceduralMeshComponent, UStaticMesh*& OutStaticMesh)
{
	return EditorMeshUtils::CreateStaticMeshAssetFromProceduralMesh(ProceduralMeshComponent, OutStaticMesh);
}




void UEditorMeshBlueprintLibrary::OverrideWireframeColor(UStaticMeshComponent* StaticMeshComp, FColor NewColor)
{

}

void UEditorMeshBlueprintLibrary::ResetWireframeColor(UStaticMeshComponent* StaticMeshComp)
{

}

#undef LOCTEXT_NAMESPACE