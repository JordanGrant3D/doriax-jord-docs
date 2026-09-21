---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).openGL

Returns `true` when any OpenGL backend (`GLCORE`, `GLES3`) is active.

```cpp
static bool isOpenGL();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-open-gl.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-open-gl.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
