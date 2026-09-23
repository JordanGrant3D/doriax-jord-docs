---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Framebuffer
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Framebuffer

`Framebuffer` is an off-screen render target: a GPU color buffer (optionally with depth, shadow-map, or multiple color attachments) that cameras and scenes render into instead of the main surface. It owns its `width` / `height`, minification / magnification filters, and wrap modes, and follows an explicit `create()` / `destroy()` lifecycle (`isCreated()` reports whether the GPU resource is live). Sample the result through a [`Texture`](texture.md) bound with [`setFramebuffer`](texture-set-framebuffer.md) — the standard minimap-feed and rear-view-mirror setup.

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Creates an empty framebuffer; configure size and filters, then call `create()`. |

## Related

| Page | Description |
| :--- | :--- |
| [`Texture::setFramebuffer`](texture-set-framebuffer.md) / [`Texture::getFramebuffer`](texture-get-framebuffer.md) | Binds a texture to a render target so its output can be sampled like any sprite. |
| [`Camera::getFramebuffer`](../../object/camera/camera-render-to-texture.md) | Reads the internal framebuffer of a render-to-texture camera. |
| [`Engine::framebuffer`](../../engine/engine-framebuffer.md) | Off-screen render target for full-frame output. |
| [`TextureRender::createFramebufferTexture`](../texture-render/texture-render-create-framebuffer-texture.md) | Allocates a render-target texture, optionally with depth. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
