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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
