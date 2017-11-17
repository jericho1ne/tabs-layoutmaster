[Uno.Compiler.UxGenerated]
public partial class H1Text: Fuse.Controls.Text
{
    static H1Text()
    {
    }
    [global::Uno.UX.UXConstructor]
    public H1Text()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 20f;
        this.TextAlignment = Fuse.Controls.TextAlignment.Left;
        this.Alignment = Fuse.Elements.Alignment.TopLeft;
        this.Margin = float4(0f, 10f, 0f, 10f);
    }
}
