[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
ResourceBuildInfo
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## ResourceBuildInfo

Per-asset build snapshot: which resource is being built, how far along it is (`0.0`–`1.0`), and when it started. The build threads fill these in; gameplay code only reads them. CharacterController loading screens poll them (via [ResourceProgress](../resource-progress/resource-progress.md)) to draw one warmup bar per asset, or aggregate them through [OverallBuildProgress](../overall-build-progress/overall-build-progress.md) for a single total bar.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| `ResourceType` | [**type**](resource-build-info-type.md) | Asset kind for this build (`Shader`, `Texture`, `Model`, or `Sound`). |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**name**](resource-build-info-name.md) | Resource name being built, used as the loading-row label. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**progress**](resource-build-info-progress.md) | Build fill amount from `0.0` (started) to `1.0` (done). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isActive**](resource-build-info-is-active.md) | Snapshot flag marking the build as still in flight. |
| [**std::chrono::steady_clock::time_point**](https://en.cppreference.com/w/cpp/chrono/steady_clock) | [**startTime**](resource-build-info-start-time.md) | Moment the build started, for elapsed-time stall detection. |

## Constructors

No explicit constructors. `ResourceBuildInfo` is an aggregate: default-construct it (`doriax::ResourceBuildInfo info;`) and fill in the fields directly, or receive snapshots back from [ResourceProgress::getCurrentBuild](../resource-progress/resource-progress-get-current-build.md) and [ResourceProgress::getAllActiveBuilds](../resource-progress/resource-progress-get-all-active-builds.md).
