---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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
