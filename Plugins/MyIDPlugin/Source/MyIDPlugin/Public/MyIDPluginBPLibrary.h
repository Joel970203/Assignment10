#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyIDPluginBPLibrary.generated.h"

UCLASS()
class UMyIDPluginBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

    // ����� �̸� ����
    UFUNCTION(BlueprintCallable, Category = "MyIDPlugin")
    static void SetUserName(const FString& NewName);

    // ����� �̸� �ҷ�����
    UFUNCTION(BlueprintPure, Category = "MyIDPlugin")
    static FString GetUserName();

private:
    static FString UserName;
};
