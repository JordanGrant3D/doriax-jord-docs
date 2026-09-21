---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).bottomClip

Bottom extent of the orthographic frustum, typically set via `setOrtho`. Setting it directly disables `autoResize` so a split-screen or minimap camera keeps its bounds.

```cpp
void setBottomClip(float bottom);
float getBottomClip() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-bottom-clip.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-bottom-clip.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
