[Uno.Compiler.UxGenerated]
public partial class ParagraphText: Fuse.Controls.Text
{
    static ParagraphText()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ParagraphText()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.LineSpacing = 8f;
        this.FontSize = 12f;
        this.TextAlignment = Fuse.Controls.TextAlignment.Left;
        this.TextColor = float4(0.2f, 0.2f, 0.2f, 1f);
        this.Alignment = Fuse.Elements.Alignment.TopLeft;
        this.Margin = float4(0f, 10f, 0f, 10f);
    }
}
