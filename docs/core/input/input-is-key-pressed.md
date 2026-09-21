[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Input
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Input](input.md).isKeyPressed(int key)

Returns `true` while the given key is held down. Pass a `D_KEY_*` constant (e.g. `D_KEY_W`, `D_KEY_SPACE`, `D_KEY_LEFT`) for the key code.

```cpp
static bool isKeyPressed(int key);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-is-key-pressed.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-is-key-pressed.h"
```
