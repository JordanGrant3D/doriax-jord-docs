[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
ResourceProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## ResourceProgress

Static tracker for async resource builds. Build threads register each asset build here; CharacterController loading screens poll the query methods every frame to drive warmup bars, "now loading" labels, and resource counters. Individual builds surface as [ResourceBuildInfo](../resource-build-info/resource-build-info.md) snapshots and the aggregate view as [OverallBuildProgress](../overall-build-progress/overall-build-progress.md).

## Constructors

No public constructors. `ResourceProgress` is a static-only class: call its methods directly as `doriax::ResourceProgress::method(...)` without creating an instance.

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**startBuild**](resource-progress-start-build.md) | [**uint64_t**](https://en.cppreference.com/w/cpp/types/integer) id, `ResourceType` type, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& name | Registers a new in-flight build snapshot. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateProgress**](resource-progress-update-progress.md) | [**uint64_t**](https://en.cppreference.com/w/cpp/types/integer) id, [**float**](https://en.cppreference.com/cpp/keyword/float) progress | Updates a build's fill amount, clamped to `0.0`–`1.0`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**completeBuild**](resource-progress-complete-build.md) | [**uint64_t**](https://en.cppreference.com/w/cpp/types/integer) id | Removes a finished build from the tracker. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**failBuild**](resource-progress-fail-build.md) | [**uint64_t**](https://en.cppreference.com/w/cpp/types/integer) id | Removes a failed build from the tracker. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasActiveBuilds**](resource-progress-has-active-builds.md) |  | Returns `true` while at least one build is in flight. |
| [**OverallBuildProgress**](../overall-build-progress/overall-build-progress.md) | [**getOverallProgress**](resource-progress-get-overall-progress.md) |  | Returns the aggregate snapshot across all active builds. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getActiveBuildCount**](resource-progress-get-active-build-count.md) |  | Returns the number of builds currently in flight. |
| [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)\<[**ResourceBuildInfo**](../resource-build-info/resource-build-info.md)\> | [**getAllActiveBuilds**](resource-progress-get-all-active-builds.md) |  | Returns every active build snapshot, most recent first. |
| [**ResourceBuildInfo**](../resource-build-info/resource-build-info.md) | [**getCurrentBuild**](resource-progress-get-current-build.md) |  | Returns the most recently started build snapshot. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getResourceTypeName**](resource-progress-get-resource-type-name.md) | `ResourceType` type | Returns the display label for an asset kind. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
