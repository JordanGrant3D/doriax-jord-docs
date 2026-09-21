[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureLoadResult
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## TextureLoadResult

Outcome of a CPU-side texture load, produced by [**Texture**](../texture/texture.md) `load()` for CharacterController sprite sheets and loading-screen banners. Scripts read it: `state` drives the progress bar, `errorMessage` feeds the retry prompt, and `data` hands over decoded faces. Read-only in practice — the loader fills it in.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**id**](texture-load-result-id.md) | Pool cache key the loader resolved. |
| ResourceLoadState | [**state**](texture-load-result-state.md) | Loader state (`Finished`, `Failed`, `Loading`, `NotStarted`). |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**errorMessage**](texture-load-result-error-message.md) | Failure reason when `state` is `Failed`. |
| std::shared_ptr<std::array<[**TextureData**](../texture-data/texture-data.md), 6>> | [**data**](texture-load-result-data.md) | Decoded face buffers (index `0` for 2D sprites). |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator bool**](texture-load-result-operator-bool.md) |  | Returns `true` only when `state` is `Finished`. |

