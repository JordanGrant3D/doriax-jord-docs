[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
OverallBuildProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## OverallBuildProgress

Aggregate build snapshot across every in-flight asset build. CharacterController loading screens read this (via [ResourceProgress::getOverallProgress](../resource-progress/resource-progress-get-overall-progress.md)) to drive a single total warmup bar, an "N assets left" counter, and a "now loading: X" label instead of iterating each [ResourceBuildInfo](../resource-build-info/resource-build-info.md) individually.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**totalProgress**](overall-build-progress-total-progress.md) | Mean fill amount across all active builds (`0.0`–`1.0`). |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**totalBuilds**](overall-build-progress-total-builds.md) | Number of builds currently in flight. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**completedBuilds**](overall-build-progress-completed-builds.md) | Reserved completed-build counter (currently always `0`). |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**currentBuildName**](overall-build-progress-current-build-name.md) | Name of the most recently started build. |
| `ResourceType` | [**currentBuildType**](overall-build-progress-current-build-type.md) | Asset kind of the most recently started build. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasActiveBuilds**](overall-build-progress-has-active-builds.md) | `true` while at least one build is in flight. |

## Constructors

No explicit constructors. `OverallBuildProgress` is an aggregate: default-construct it (`doriax::OverallBuildProgress overall;`) and fill in the fields directly, or receive snapshots back from [ResourceProgress::getOverallProgress](../resource-progress/resource-progress-get-overall-progress.md).
