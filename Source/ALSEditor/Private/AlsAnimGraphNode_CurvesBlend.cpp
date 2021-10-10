#include "AlsAnimGraphNode_CurvesBlend.h"

#define LOCTEXT_NAMESPACE "BlendCurvesAnimationGraphNode"

FText UAlsAnimGraphNode_CurvesBlend::GetTooltipText() const
{
	return LOCTEXT("Tooltip", "Blend Curves");
}

FText UAlsAnimGraphNode_CurvesBlend::GetNodeTitle(const ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("Title", "Blend Curves");
}

FString UAlsAnimGraphNode_CurvesBlend::GetNodeCategory() const
{
	return TEXT("ALS");
}

#undef LOCTEXT_NAMESPACE
