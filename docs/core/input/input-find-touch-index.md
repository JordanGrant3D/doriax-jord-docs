[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Input
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Input](input.md).findTouchIndex(int pointer)

Returns the index into the [getTouches](input-get-touches.md) array for the given pointer id. Returns `SIZE_MAX` if not found.

```cpp
static size_t findTouchIndex(int pointer);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-find-touch-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-find-touch-index.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
