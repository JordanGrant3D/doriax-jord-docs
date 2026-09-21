---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setSSRDebugMode()

Sets the SSR G-buffer debug visualization rendered full-screen (`0` off, `1` reflection buffer, `2` normal, `3` roughness, `4` metallic, `5` albedo, `6` IBL specular), and `getSSRDebugMode()` returns it. It is not serialized.

```cpp
void setSSRDebugMode(int mode);
int getSSRDebugMode() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-debug-mode.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-debug-mode.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
