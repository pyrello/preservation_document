(function ($) {
	$(document).ready(function() {
		setHeight();
		$(window).resize( function() {
			setHeight();
		});
		
		/*var myPDF = new PDFObject({ 
      url: $('#testlink').attr('href'),
			pdfOpenParams: { toolbar: '1' }
    }).embed('test');*/
	});
	
	function setHeight() {
		if ($(window).width() > 748) {
			var winHeight = $(window).height();
			$('#page-wrapper').height(winHeight);
			var pdfPos = $('#pdfviewerframe').position();
			$('#pdfviewerframe').height(winHeight - pdfPos.top);
		}
	}
})(jQuery);

